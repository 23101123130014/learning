// Function to set product details in local storage
function setProductDetails(element) {
    const productDetails = {
        name: element.getAttribute('data-name'),
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