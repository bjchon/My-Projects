const btn = document.querySelector(".add");
const btn2 = document.querySelector(".remove");

function random(number) {
    return Math.floor(Math.random() * (number+1));
}

function changeBackground() {
    const rndCol = `rgb(${random(255)}, ${random(255)}, ${random(255)})`;
    document.body.style.backgroundColor = rndCol;
  }
  
  btn.addEventListener("mouseover", changeBackground);
  btn2.removeEventListener("click", changeBackground);
  

/* Another Option
btn.addEventListener("click", () => {
    const rndCol = `rgb(${random(255)},${random(255)},${random(255)})`;
    document.body.style.backgroundColor = rndCol;
}); */