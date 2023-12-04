const x = 1;

function a() {
  const y = 2;
  output(y);
}

function b() {
  const z = 3;
  output(z);
}

function output(value) {
  const para = document.createElement('p');
  document.body.appendChild(para);
  para.textContent = `Value: ${value}`;
}

output(x);
a();
b();
