function calculateFinalPrice(price, discount, isMember) {
    let finalPrice = price - (price * discount / 100);

    if (isMember) {
        finalPrice = finalPrice - (finalPrice * 5 / 100);
    }

    return finalPrice;
}

console.log(calculateFinalPrice(1000, 20, true));  
console.log(calculateFinalPrice(1000, 20, false));  