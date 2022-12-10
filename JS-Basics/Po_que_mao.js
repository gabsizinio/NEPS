const fs = require("fs")
let leitura = fs.readFileSync(0, "utf8")
let linhas = leitura.split("\n")
let val = parseInt(linhas[0])
linhas.shift()



linhas.sort((a, b) => a - b);
let acu = 0;
let res = 0;

for(var k = 0; k < linhas.length; k++){
    acu += parseInt(linhas[k])
    if(acu > val){
        break
    }
    res++;
}
console.log(res)