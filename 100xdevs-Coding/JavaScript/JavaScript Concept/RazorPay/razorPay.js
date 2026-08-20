// // Razorpay Payment Integration

// // Backend
// 1. Install Razorpay: npm install razorpay
// 2. POST API: Create an order using Razorpay Key ID, Key Secret, amount, and currency (INR).
// 3. GET API: Send Razorpay Key ID to the frontend.
// 4. Install/use crypto to verify the payment signature using HMAC.

// // Frontend
// 1. Use Axios to call GET API for Razorpay Key ID.
// 2. Call POST API to create the payment order.
// 3. Add Razorpay Checkout script from Razorpay.
// 4. Open Razorpay payment popup with key, order_id, amount, name, callback/handler, etc.
// 5. After payment, send razorpay_order_id, razorpay_payment_id, and razorpay_signature to the backend.
// 6. Backend verifies the signature using HMAC.
//    HMAC is NOT created from the user's email/identity.
//    Razorpay signature verification uses:
//    order_id + "|" + payment_id
// 7. If the signature is valid, payment is successful and redirect the user to the success page.
// 8. Pass order_id or user details if needed to identify the payment/user.



//please watch it
// https://youtu.be/ICxmav6ezJM?si=Dewo_H9ftqLYNvis