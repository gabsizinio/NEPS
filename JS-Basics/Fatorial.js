function fat(x){
    if(x == 1 || x == 0){
        return 1
    }else{
        return x * fat(x - 1)
    }
}

const fs = require("fs")
let leitura = fs.readFileSync(0, "utf8")
let linhas = leitura.split("\n")

let vari = linhas[0]

console.log(fat(vari))