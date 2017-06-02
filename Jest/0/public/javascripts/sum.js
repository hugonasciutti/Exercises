export const sum = (x, y) => {
  if (typeof(x) !== 'number' || typeof(y) !== 'number') {
    return null;
  }
  return x + y;
};
