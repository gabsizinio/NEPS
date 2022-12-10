const fs = require("fs")

let leitura = fs.readFileSync(0, "utf8")
let linhas = leitura.split(" ")

for(let i = 0; i <= parseInt(linhas[0]); i++){
    if(parseInt(linhas[0]) % i == 0){
        process.stdout.write(`${i} `);
    }
}