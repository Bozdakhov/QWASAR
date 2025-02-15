
    function my_spaceship(param){
        let x = 0;
        let y = 0;
         let direction = 'up';
        
         for(let i = 0;  i < param.length; i++){
            if(param[i] == 'R'){
                 if(direction == 'up'){
                     direction = 'right'
                 }else if (direction == 'right'){
                     direction = 'down'
                 }else if (direction == 'down'){
                     direction = 'left'
                 }else if (direction == 'left'){
                     direction = 'up'
                 }  
                 }else if(param[i] == 'L'){
                     if(direction == 'up'){
                         direction = 'left'
                     }else if(direction == 'right'){
                         direction = 'up'
                     }else if(direction == 'down'){
                         direction = 'right'
                     }else if(direction == 'left'){
                         direction = 'down'
                     }
                 }else if(param[i] == 'A'){
                     if(direction == 'up'){
                        y--
                     }else if(direction == 'right'){
                     x++
                 }else if(direction == 'down'){
                     y++
                 }else if(direction == 'left'){
                     x--
                 }
            }
          
        }  
        return `{x: ${x}, y: ${y}, direction: '${direction}'}`
        } 
        //console.log(my_levenshtein("GGACTGA", "GGACTGA"))