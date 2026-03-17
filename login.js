const dblimit = 5;
let dbuser = ["admin", "nega"]; // database nato
let dbpass = ["123", "123"];
let usercount = 2;
let login = false;
let attempt = 0;

const readline = require('readline');
const rl = readline.createInterface({
    input: process.stdin,
    output: process.stdout
});


const clearConsole = () => {
    console.clear();
};

const question = (query) => {
    return new Promise((resolve) => {
        rl.question(query, resolve);
    });
};

const runProgram = async () => {
    while (true) {
        console.log("\n--LOGIN PORTAL--");
        console.log("1. Login");
        console.log("2. Register");
        console.log("3. Reset Password");
        console.log("4. Exit");
        
        const choice = await question("Select Choice: ");
        clearConsole();
        
        if (choice === '1') {
            const user = await question("user: ");
            const pass = await question("pass: ");
            
            for (let i = 0; i < usercount; i++) {
                if (user === dbuser[i] && pass === dbpass[i]) {
                    login = true;
                    break;
                } else {
                    login = false;
                }
            }
            
            if (login) {
                console.log(`Welcome! ${user}`);
                attempt = 0;
            } else {
                console.log("username or password is wrong");
                attempt++; // +1 everytime magkamali ta
            }
            
            if (!login && attempt > 3) {
                console.log("Login Locked after many attempts.");
            }
            
            await question("Press Enter to go back menu");
            clearConsole();
            
        } else if (choice === '2') {
            const user = await question("user: ");
            const pass = await question("pass: ");
            
            if (usercount !== dblimit) {
                // atong idagdag sa array
                dbuser[usercount] = user;
                dbpass[usercount] = pass;
                usercount++; // +1 add ug isa kay naa tay gipuno
                console.log("User added!");
            } else {
                console.log("registed user has reached the maximum limit cannot add more sorri : <");
            }
            
            await question("Press Enter to go back menu");
            clearConsole();
            
        } else if (choice === '3') {
            console.log("---Reset Password---");
            const user = await question("Enter username: ");
            
            for (let i = 0; i < usercount; i++) {
                if (user === dbuser[i]) {
                    const pass = await question("Enter new password: ");
                    dbpass[i] = pass;
                    console.log(`Password reset for ${user}`);
                    break;
                } else if (i === usercount - 1) {
                    console.log("User not found!");
                }
            }
            
            await question("Press Enter to go back menu");
            clearConsole();
            
        } else if (choice === '4') {
            console.log("Goodbye : /");
            console.log("Program Closed!");
            rl.close();
            break;
        }
    }
};

console.log("Starting Login Portal...");
runProgram();