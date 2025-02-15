function my_levenshtein(param_1, param_2){
    let sum = 0;
    if(param_1.length !== param_2.length){
        return -1;
    }else{
        for(let i = 0; i < param_1.length; i++){
            if(param_1[i] !== param_2[i]){
                sum += 1;
            }
        }
    }
    return sum;
}
// console.log(my_levenshtein("GGACTGA", "GGACTGA"))
// console.log(my_levenshtein("ACCAGGG", "ACTATGG"))
// console.log(my_levenshtein("GGACGGATTCTG", "AGG"))
// console.log(my_levenshtein("", ""))

//Commant
// node my_levenshtein.js