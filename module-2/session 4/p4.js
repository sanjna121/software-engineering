let likes = 1200;
let comments = 150;
let shares = 40;

let isTrending = (likes >= 1000) || (comments > 200 && shares >= 50);

console.log("Trending Post:", isTrending);