const fs = require("fs")
let leitura = fs.readFileSync(0, "utf8")
let linhas = leitura.split("\n")

let aux = 0
let aux1 = 0

let pal = linhas[0]
let string1 = []
let string2 = []

for(let i = 0; i < pal.length; i++){
    if(pal[i] == "a" || pal[i] == "e" || pal[i] == "i" || pal[i] == "o" || pal[i] == "u"){
        string1[aux] = pal[i]
        aux++;
    }
}

for(let k = pal.length - 1; k >= 0; k--){
    if(pal[k] == "a" || pal[k] == "e" || pal[k] == "i" || pal[k] == "o" || pal[k] == "u"){
        string2[aux1] = pal[k]
        aux1++;
    }  
}

let resp = "S"

for(let j = 0; j < string1.length; j++){
    if(string1[j] != string2[j]){
        resp = "N"
    }
}

console.log(resp)
