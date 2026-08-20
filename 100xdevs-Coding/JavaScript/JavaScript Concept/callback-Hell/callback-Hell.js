
const cart = ['shose', 'kurti', 'tshirt'];

api.createOrderSummery(cart, function(){
    api.proceedToPayment(function(){
        api.showOrderSummry( function (){
            api.updateWallet()
        })
    })
})

// these are apis, inside call back, and makes call back hell.

//   api.createOrderSummery()
//   api.proceedToPayment()
//   api.showOrderSummry()
//   api.updateWallet()