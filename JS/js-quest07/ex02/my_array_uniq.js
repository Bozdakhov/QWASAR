function my_array_uniq(param_1) {
    let result = [];
    let map = {};
for(let i=0; i < param_1.length; i++)

if(map[param_1[i]]){
    continue;   
}
else {result.push(param_1[i]);
    map[param_1[i]] = true;
}
return result;
}