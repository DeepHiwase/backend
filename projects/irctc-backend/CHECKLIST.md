# Requirements

## Functional Requirements

- [] Auth
  - [] Signup, Login
  - [] otp
  - [] Google OAuth
- [] User Profile
- [] search functionality - to search route trains with src and dst i/p
  - [] fuzzy search
  - [] auto completion
- [] different route details on which train is running
- [] booking
  - [] concurrent booking
  - [] partial booking
- [] payment
  - [] multiple payment gateways
- [] archieve old bookings
- [] mailing
- [] faster response
- [] payment intent on stripe
- [] deploy with domain - hhtp -> https

Approach - microservices

- [] rotate refresh token
- [] services
  - [] user
  - [] search
    - [] for seach - use elastic search - since it out-of-the-box provides fuzzy search
  - [] route
    - [] to manage all routes of train and stations
    - [] only by admin
  - [] booking
  - [] payment
    - [] adaptor pattern
  - [] archieval
    - [] enter completed / old booking into archieve database - use cassandra db

- [] tools
  - [] postgresql - with prisma
  - [] redis
  - [] sendgrid - mail
  - [] bullmq - queuing
  - [] docker
  - [] AWS EC2
  - [] http -> https with certification by `let's encrypt`
  - [] postman - with env dev, staging, prod

## Non-Functional Requirements
