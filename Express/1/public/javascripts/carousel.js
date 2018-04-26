readMouseMove = (e) => {
  var result_x = document.getElementById('x_result');
  var result_y = document.getElementById('y_result');
  result_x.innerHTML = e.clientX;
  result_y.innerHTML = e.clientY;
}

document.onmousemove = readMouseMove;
