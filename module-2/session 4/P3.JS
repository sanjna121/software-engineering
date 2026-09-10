function isEligibleForOffer(age, orderValue) {
    return age >= 18 && orderValue > 500;
}
console.log(isEligibleForOffer(20, 700)); 
console.log(isEligibleForOffer(16, 700)); 
console.log(isEligibleForOffer(20, 400)); 