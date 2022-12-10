function fib(x){
    if(x == 0 || x == 1){
        return 1
    }else{
        return fib(x - 1) + fib(x - 2)
    }
}

const fs = require("fs")
let leitura = fs.readFileSync(0, "utf8")
let linhas = leitura.split("\n")

let vari = linhas[0]

console.log(fib(vari))