class Star_Cinema:
    __hall_list = []  # Class attribute to store all halls

    @classmethod
    def entry_hall(cls,hall):
        cls.__hall_list.append(hall)  # Add hall to the hall list
        print(f"Hall {hall.hall_no} added to Star Cinema.")

    @classmethod
    def get_hall_list(cls):
        return cls.__hall_list  # Return the hall list for viewing


class Hall:
    def __init__(self, rows, cols, hall_no):
        self.__rows = rows
        self.__cols = cols
        self.__hall_no = hall_no
        self.__seats = {}
        self.__show_list = []
        # Add this hall to Star_Cinema
        Star_Cinema.entry_hall(self)

    def entry_show(self, show_id, movie_name, time):
        # Add the show details to the show list
        show_details = (show_id, movie_name, time)
        self.__show_list.append(show_details)
        # Initialize seat allocation for the show
        self.__seats[show_id] = [["Free" for _ in range(self.__cols)] for _ in range(self.__rows)]
        print(f"Show {movie_name} (ID: {show_id}) added to Hall {self.__hall_no}.")

    def book_seats(self, show_id, seats_to_book):
        # Check if the show exists
        if show_id not in self.__seats:
            print("Error: Invalid show ID.")
            return

        seat_map = self.__seats[show_id]
        for row, col in seats_to_book:
            # Check if seat is within valid range
            if row < 0 or row >= self.__rows or col < 0 or col >= self.__cols:
                print(f"Error: Invalid seat ({row}, {col}).")
                return
            # Check if seat is already booked
            if seat_map[row][col] == "Booked":
                print(f"Error: Seat ({row}, {col}) is already booked.")
                return
            # Book the seat
            seat_map[row][col] = "Booked"

        print(f"Successfully booked seats: {seats_to_book} for Show ID {show_id}.")

    def view_show_list(self):
        if not self.__show_list:
            print(f"No shows are running in Hall {self.__hall_no}.")
        else:
            print(f"Shows running in Hall {self.__hall_no}:")
            for show in self.__show_list:
                print(f"ID: {show[0]}, Movie: {show[1]}, Time: {show[2]}")

    def view_available_seats(self, show_id):
        # Check if the show exists
        if show_id not in self.__seats:
            print("Error: Invalid show ID.")
            return

        print(f"Available seats for Show ID {show_id} in Hall {self.__hall_no}:")
        seat_map = self.__seats[show_id]
        for i, row in enumerate(seat_map):
            row_display = " ".join(f"[{seat}]" for seat in row)
            print(f"Row {i}: {row_display}")

    # Properties to make attributes private
    @property
    def hall_no(self):
        return self.__hall_no


# Replica System for counter
def cinema_counter():
    # Initialize the system with some halls and shows
    hall1 = Hall(5, 5, "Hall-1")
    hall1.entry_show("S1", "Movie A", "12:00 PM")
    hall1.entry_show("S2", "Movie B", "03:00 PM")

    hall2 = Hall(6, 6, "Hall-2")
    hall2.entry_show("S3", "Movie C", "01:00 PM")

    # Counter interaction
    while True:
        print("\n--- Star Cinema Counter ---")
        print("1. View All Shows")
        print("2. View Available Seats for a Show")
        print("3. Book Tickets")
        print("4. Exit")
        choice = input("Enter your choice: ")

        if choice == "1":
            # View all shows
            for hall in Star_Cinema.get_hall_list():
                hall.view_show_list()

        elif choice == "2":
            # View available seats
            show_id = input("Enter Show ID: ")
            for hall in Star_Cinema.get_hall_list():
                hall.view_available_seats(show_id)

        elif choice == "3":
            # Book tickets
            show_id = input("Enter Show ID: ")
            num_seats = int(input("Enter number of seats to book: "))
            seats_to_book = []
            for _ in range(num_seats):
                row = int(input("Enter row: "))
                col = int(input("Enter column: "))
                seats_to_book.append((row, col))
            for hall in Star_Cinema.get_hall_list():
                hall.book_seats(show_id, seats_to_book)

        elif choice == "4":
            print("Exiting Star Cinema Counter. Have a great day!")
            break

        else:
            print("Invalid choice. Please try again.")


# Run the cinema counter system
if __name__ == "__main__":
    cinema_counter()
