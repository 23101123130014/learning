// Function to set product details in local storage
function setProductDetails(element) {
    const productDetails = {
        name: element.getAttribute('data-name'),
        price: element.getAttribute('data-price'),
        description: element.getAttribute('data-description'),
        image: element.getAttribute('data-image'),
        specifications: element.getAttribute('data-specifications').split(';')
    };
    localStorage.setItem('productDetails', JSON.stringify(productDetails));
}


// Function to load product details from local storage and display on the product page
function loadProductDetails() {
    const productDetails = JSON.parse(localStorage.getItem('productDetails'));
    if (productDetails) {
        document.getElementById('product-name').textContent = productDetails.name;
        document.getElementById('product-price').textContent = productDetails.price;
        document.getElementById('product-description').textContent = productDetails.description;
        document.getElementById('product-image').src = productDetails.image;

        const specificationsList = document.getElementById('product-specifications');
        specificationsList.innerHTML = '';
        productDetails.specifications.forEach(spec => {
            const listItem = document.createElement('li');
            listItem.textContent = spec;
            specificationsList.appendChild(listItem);
        });
    }
}


// Function to add product to cart from product details page
function addToCartFromDetails() {
    const productDetails = JSON.parse(localStorage.getItem('productDetails'));
    if (productDetails) {
        addToCart(productDetails);
    }
}


// Function to add product to cart and update cart count
function addToCart(product) {
    let cart = JSON.parse(localStorage.getItem('cart')) || [];
    cart.push(product);
    localStorage.setItem('cart', JSON.stringify(cart));
    updateCartCount();
    alert('Product added to cart!');
}


// Function to update cart count in the navigation
function updateCartCount() {
    const cart = JSON.parse(localStorage.getItem('cart')) || [];
    document.getElementById('cart-count').textContent = cart.length;
}


// Function to display cart items on the cart page
function displayCartItems() {
    const cart = JSON.parse(localStorage.getItem('cart')) || [];
    const cartItemsContainer = document.querySelector('.cart-items');
    cartItemsContainer.innerHTML = '';

    cart.forEach((item, index) => {
        const cartItem = document.createElement('div');
        cartItem.classList.add('cart-item');
        cartItem.innerHTML = `
            <div class="cart-item-image">
                <img src="${item.image}" alt="${item.name}">
            </div>
            <div class="cart-item-details">
                <h4>${item.name}</h4>
                <p class="price">${item.price}</p>
                <button onclick="removeFromCart(${index})">Remove</button>
            </div>
        `;
        cartItemsContainer.appendChild(cartItem);
    });

    updateCartTotal();
}


// Function to remove item from cart
function removeFromCart(index) {
    let cart = JSON.parse(localStorage.getItem('cart')) || [];
    cart.splice(index, 1);
    localStorage.setItem('cart', JSON.stringify(cart));
    displayCartItems();
    updateCartCount();
}


// Function to update cart total
function updateCartTotal() {
    const cart = JSON.parse(localStorage.getItem('cart')) || [];
    let total = 0;
    cart.forEach(item => {
        total += parseFloat(item.price.replace('TZS ', '').replace(/,/g, ''));
    });
    document.getElementById('cart-total').textContent = `TZS ${total.toLocaleString('en-US')}`;
}


// Function to proceed to checkout
function proceedToCheckout() {
    window.location.href = 'checkout.html';
}


// Function to load checkout details
function loadCheckoutDetails() {
    const cart = JSON.parse(localStorage.getItem('cart')) || [];
    let total = 0;
    cart.forEach(item => {
        total += parseFloat(item.price.replace('TZS ', '').replace(/,/g, ''));
    });
    document.getElementById('checkout-total').textContent = `TZS ${total.toLocaleString('en-US')}`;
}


// Function to handle payment and redirect to home page
function handlePayment(event) {
    event.preventDefault();
    alert('Payment successful!');
    localStorage.removeItem('cart');
    window.location.href = 'index.html';
}


// Event listener for adding products to cart from product list
document.querySelectorAll('.add-to-cart').forEach(button => {
    button.addEventListener('click', function () {
        const product = {
            name: this.parentElement.querySelector('.description').getAttribute('data-name'),
            price: this.parentElement.querySelector('.price').textContent,
            description: this.parentElement.querySelector('.description').getAttribute('data-description'),
            image: this.parentElement.querySelector('img').src
        };
        addToCart(product);
    });
});


// Initialize cart count on page load
document.addEventListener('DOMContentLoaded', () => {
    updateCartCount();
    if (document.querySelector('.cart-items')) {
        displayCartItems();
    }
    if (document.getElementById('checkout-total')) {
        loadCheckoutDetails();
    }
    if (document.getElementById('payment-form')) {
        document.getElementById('payment-form').addEventListener('submit', handlePayment);
    }
});


// Function to handle user login
function handleLogin(event) {
    event.preventDefault();

    // Get user input values
    const username = document.getElementById('username').value;
    const password = document.getElementById('password').value;

    // Retrieve stored user data from localStorage
    const storedUser = JSON.parse(localStorage.getItem(username));

    // Validate login credentials
    if (storedUser && storedUser.password === password) {
        // Successful login
        alert('Login successful!');
        sessionStorage.setItem('loggedInUser', username);
        window.location.href = 'index.html';
    } else {
        // Invalid credentials
        alert('Invalid username or password.');
    }
}


// Function to handle user registration
function handleRegister(event) {
    event.preventDefault();

    // Get user input values
    const fullname = document.getElementById('fullname').value;
    const username = document.getElementById('username').value;
    const email = document.getElementById('email').value;
    const password = document.getElementById('password').value;
    const phone = document.getElementById('phone').value;

    // Validate required fields and formats
    if (fullname.split(' ').length < 2) {
        alert('Full Name must include at least two names.');
        return;
    }
    if (password.length < 6) {
        alert('Password must be at least six characters long.');
        return;
    }
    if (!/^[6-7]\d{8}$/.test(phone)) {
        alert('Phone number must start with 6 or 7 and be 9 digits long.');
        return;
    }

    // Check if username, email, or phone number already exists
    for (let i = 0; i < localStorage.length; i++) {
        const key = localStorage.key(i);
        const user = JSON.parse(localStorage.getItem(key));
        if (key === username) {
            alert('Username already in use.');
            return;
        }
        if (user.email === email) {
            alert('Email already in use.');
            return;
        }
        if (user.phone === `+255${phone}`) {
            alert('Phone number already in use.');
            return;
        }
    }

    // Store user data securely in localStorage
    const userData = { fullname, email, password, phone: `+255${phone}` };
    localStorage.setItem(username, JSON.stringify(userData));

    alert('Registration successful! You can now log in.');
    window.location.href = 'login.html';
}


// Function to display user info on the User Info page
function populateUserInfo() {
    const loggedInUser = sessionStorage.getItem('loggedInUser');
    if (!loggedInUser) {
        alert('You must log in first.');
        window.location.href = 'login.html';
        return;
    }

    // Retrieve user data from localStorage
    const userInfo = JSON.parse(localStorage.getItem(loggedInUser));
    if (userInfo) {
        const userInfoContainer = document.getElementById('user-info');
        userInfoContainer.innerHTML = `
        <p><strong>Full Name:</strong> ${userInfo.fullname}</p>
        <p><strong>Username:</strong> ${loggedInUser}</p>
        <p><strong>Email:</strong> ${userInfo.email}</p>
        <p><strong>Phone:</strong> ${userInfo.phone}</p>
    `;
    }
}


// Function to handle user logout
function handleLogout() {
    sessionStorage.removeItem('loggedInUser');
    alert('You have been logged out.');
    window.location.href = 'login.html';
}


// Attach event listeners when the DOM is fully loaded
document.addEventListener('DOMContentLoaded', () => {
    // Login form submission
    const loginForm = document.getElementById('login-form');
    if (loginForm) loginForm.addEventListener('submit', handleLogin);

    // Registration form submission
    const registerForm = document.getElementById('register-form');
    if (registerForm) registerForm.addEventListener('submit', handleRegister);

    // Populate user info on the User Info page
    if (document.getElementById('user-info')) {
        populateUserInfo();
    }

    // Sign out button click
    const signOutButton = document.getElementById('signout');
    if (signOutButton) signOutButton.addEventListener('click', handleLogout);
});


document.addEventListener('DOMContentLoaded', () => {
    // Get the logged-in user from session storage
    const loggedInUser = sessionStorage.getItem('loggedInUser');
    const userInfoLink = document.getElementById('user-info-link');
    const signOutLink = document.getElementById('signout');
    const yourAccountLink = document.getElementById('your-account');
    const accountOptions = document.getElementById('account-options');

    // Function to update the visibility of account options based on login status
    function updateAccountOptions() {
        if (loggedInUser) {
            userInfoLink.style.display = 'block';
            signOutLink.style.display = 'block';
        } else {
            userInfoLink.style.display = 'none';
            signOutLink.style.display = 'none';
        }
    }

    // Update account options on page load
    updateAccountOptions();

    // Redirect to login page if user is not logged in when clicking "Your Account"
    yourAccountLink.addEventListener('click', (event) => {
        if (!loggedInUser) {
            event.preventDefault();
            window.location.href = 'login.html';
        }
    });

    // Show account options dropdown on mouseover if user is logged in
    yourAccountLink.addEventListener('mouseover', () => {
        if (loggedInUser) {
            accountOptions.classList.add('show');
        }
    });

    // Hide account options dropdown on mouseout if user is logged in
    yourAccountLink.addEventListener('mouseout', () => {
        if (loggedInUser) {
            accountOptions.classList.remove('show');
        }
    });

    // Keep account options dropdown visible on mouseover
    accountOptions.addEventListener('mouseover', () => {
        if (loggedInUser) {
            accountOptions.classList.add('show');
        }
    });

    // Hide account options dropdown on mouseout
    accountOptions.addEventListener('mouseout', () => {
        if (loggedInUser) {
            accountOptions.classList.remove('show');
        }
    });

    // Handle sign out click event
    signOutLink.addEventListener('click', () => {
        sessionStorage.removeItem('loggedInUser');
        alert('You have been logged out.');
    });
});


// Function to handle login form submission
function handleLogin(event) {
    event.preventDefault();

    const username = document.getElementById('username').value;
    const password = document.getElementById('password').value;
    const storedUser = JSON.parse(localStorage.getItem(username));

    if (storedUser && storedUser.password === password) {
        alert('Login successful!');
        sessionStorage.setItem('loggedInUser', username);

        // Redirect to the page the user was trying to access before login
        const redirectAfterLogin = sessionStorage.getItem('redirectAfterLogin');
        if (redirectAfterLogin) {
            sessionStorage.removeItem('redirectAfterLogin');
            window.location.href = redirectAfterLogin;
        } else {
            window.location.href = 'index.html';
        }

        // Update account options after login
        document.getElementById('user-info-link').style.display = 'block';
        document.getElementById('signout').style.display = 'block';
    } else {
        alert('Invalid username or password.');
    }
}


// Function to proceed to checkout
function proceedToCheckout() {
    const loggedInUser = sessionStorage.getItem('loggedInUser');
    if (!loggedInUser) {
        alert('You need to register or login before proceeding to checkout.');
        sessionStorage.setItem('redirectAfterLogin', 'checkout.html');
        window.location.href = 'login.html';
        return;
    }

    // Redirect to checkout page
    window.location.href = 'checkout.html';
}


// Function to handle image carousel
document.addEventListener('DOMContentLoaded', () => {
    const imageContainers = document.querySelectorAll('.image-container');

    imageContainers.forEach(container => {
        const images = container.querySelectorAll('img');
        let currentIndex = 0;

        // Function to show the next image
        function showNextImage() {
            images[currentIndex].classList.remove('active');
            currentIndex = (currentIndex + 1) % images.length;
            images[currentIndex].classList.add('active');
        }

        // Initialize the first image as active
        images[currentIndex].classList.add('active');

        // Set a random interval to show the next image between 5 to 10 seconds
        const randomInterval = Math.floor(Math.random() * 5000) + 5000;
        setInterval(showNextImage, randomInterval);
    });
});


// Save the scroll position before navigating away
window.addEventListener('beforeunload', function () {
    sessionStorage.setItem('scrollPosition', window.scrollY);
});


// Restore the scroll position when the user returns
window.addEventListener('load', function () {
    const scrollPosition = sessionStorage.getItem('scrollPosition');
    if (scrollPosition !== null) {
        window.scrollTo(0, parseInt(scrollPosition, 10));
    }
});


// Get the button
let backToTopButton = document.getElementById("back-to-top");


// When the user scrolls down 20px from the top of the document, show the button
window.onscroll = function () {
    scrollFunction();
};


function scrollFunction() {
    if (document.body.scrollTop > 20 || document.documentElement.scrollTop > 20) {
        backToTopButton.style.display = "block";
    } else {
        backToTopButton.style.display = "none";
    }
}


// When the user clicks on the button, scroll to the top of the document
backToTopButton.addEventListener('click', function () {
    document.body.scrollTop = 0;
    document.documentElement.scrollTop = 0;
});