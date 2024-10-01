const membershipForm = document.getElementById('sendButton')

membershipForm.addEventListener('click', () => {
    const name = document.getElementById('name'). value
    var male = document.getElementById('male');
    var female = document.getElementById('female');
    const email = document.getElementById('email'). value
    const phone = document.getElementById('phone'). value
    const address = document.getElementById('address'). value

    if(name === '' || male.checked == false && female.checked == false || email === '' || phone === '' || address === ''){
        alert("Please Submit Required Data");
        return
    }

    //Name Validation
    if(name.length < 3){
        alert("Please Enter Name Again (Must higher than two letters)");
        return
    }

    //Email Validation
    let x = -1;

    for(let i=0; i<email.length; i++){
        if(email[i] === '@') x = 1
    }

    if(x == -1){
        alert('Email Invalid!')
        return 
    }

    //Phone Validation
    let y = -1;
    for(let i=0; i<phone.length; i++){
        if(phone[i] === '+') y = 1
    }

    if(y == -1){
        alert('Phone Invalid! (Include + Please, example(+62))')
        return 
    }

    //Address Validaton
    let z = -1;
    for(let i=0; i<address.length; i++){
        if(address[i] === ',') z = 1
    }

    if(z == -1){
        alert('Address Invalid! (Include "," Please, example(Gatot Kaca Street, Jakarta))')
        return 
    }

    alert("Submit Success!")
})