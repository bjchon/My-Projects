
    const canvas = document.querySelector('canvas');
    const ctx = canvas.getContext('2d');

    const x = 50;
    const y = 60;
    const width = 100;
    const height = 75;
    const color = 'blue';

function drawRect() {
    // Add your code here
    ctx.rect(x,y,width,height);
    ctx.fillStyle = color;
    ctx.fill();

    // Don't edit the code below here!

    const section = document.querySelector('section');
}

function clearRect() {
    ctx.clearRect(x,y,width,height);
}