from datetime import datetime
a=input("Enter name : ")
a=a.capitalize()

# Get today's date
today_date = datetime.now().date()

# Print today's date
# print("Today's date is:", today_date)

print(f'''Dear {a}, 
You are selected! 
{today_date} ''')