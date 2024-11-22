# MERC Airline Ticketing Service

MERC Group of Company offers private airplane aviation reservation for certain destinations.

---

## Components:
- Accepts number/s of passenger/s.
- All payments are cash basis.
- The program must verify the age of the passenger/s:
  - If **age ≤ 13**, discount factor: **2%**.
  - If **age > 13**, regular charges apply.
  - Senior Citizens: **20% discount** from the total charges.
- **Group Reservation** (more than 5 persons): **5% discount** from the total charges.
- **12% VAT** will be computed.
  - Senior Citizens are **exempted from VAT**.
- The program accepts bookings for passengers flying **LOCAL** and **INTERNATIONAL**.
- Booking option: **One-way trip** or **Round trip**.
  - For round trip fares, multiply the actual fare for the destination by **2**.

---

## Luxury Airplane Classes:
1. **Private Jet Class**: 
   - Capacity: up to 15 persons (including 2 pilots and 3 stewardesses).
2. **Business Jet Class**: 
   - Capacity: up to 10 persons (including 2 pilots and 2 stewardesses).

---

## Trip Destinations and Fares:

| Destination | To            | Private Class Fare (₱) | Business Class Fare (₱) |
|-------------|---------------|------------------------|--------------------------|
| A           | Manila-Batanes | 8,650.00              | 15,500.00               |
| B           | Manila-Bacolod | 4,543.00              | 9,500.00                |
| C           | Manila-Palawan | 5,882.00              | 13,200.00               |
| D           | Manila-Davao   | 4,096.00              | 9,230.00                |
| E           | Manila-Malaysia | 6,199.00             | 12,150.00               |
| F           | Manila-Indonesia | 5,699.00            | 10,850.00               |
| G           | Manila-Singapore | 6,899.00            | 13,110.00               |
| H           | Manila-South Korea | 12,500.00         | 23,850.00               |
| I           | Manila-Japan   | 24,800.00             | 31,450.00               |

---

### Additional Information:
- **Baggage Allowance**:
  - Domestic Flights: **8 kg per person (FREE)**.
  - International Flights: **10 kg per person (FREE)**.
  - Excess baggage fees:
    - **₱1,250 per kilo** for Private Class.
    - **₱1,450 per kilo** for Business Class.
- **Travel Insurance** (Optional):
  - Private Class: **₱4,500 per person**.
  - Business Class: **₱8,500 per person**.

---

### Program Features:
- Display details of reserved passengers.
- Prompts error messages for:
  - Exceeding the passenger reservation limit.
  - Invalid amount.
  - Invalid age.
  - Missing details or destination.
  - Invalid entry or errors during input.
- Allow retrying reservation after error.
- Handle both one-way and round-trip tickets.

---
