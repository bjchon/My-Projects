//Javascript Practice
/*const myHeading = document.querySelector("h1");
myHeading.textContent = "Hello world";*/

const myImage = document.querySelector("#bella1");

myImage.onclick = () => {
    const mySrc = myImage.getAttribute("src");
    if (mySrc ==="images/bella1.jpg") {
        myImage.setAttribute("src", "images/bella2.jpg");
    } else {
        myImage.setAttribute("src", "images/bella1.jpg");
    }
};

let myButton = document.querySelector("button");
let myHeading = document.querySelector("h1");

function setUserName() {
    const myName = prompt("Please enter your name.");
    if (!myName) {
        setUserName();
    } else {
        localStorage.setItem("name", myName);
        myHeading.textContent = `Mozilla is cool, ${myName}`;
    }
}

if (!localStorage.getItem("name")) {
    setUserName();
} else {
    const storedName = localStorage.getItem("name");
    myHeading.textContent = `Mozilla is cool, ${storedName}`;
}

myButton.onclick = () => {
    setUserName();
}