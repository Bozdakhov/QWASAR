function my_average_mark(param_1) {
    if(param_1.length ==0){
        return 0.0;
    }
    var sum =0;
    for(var i=0; i<param_1.length; i++){
        sum = sum +param_1[i]["integer"];
    }
    return(sum/param_1.length).toFixed(1);
};