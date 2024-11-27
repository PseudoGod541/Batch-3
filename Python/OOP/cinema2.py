class Star_Cinema:
    def __init__(self):
        self._hall_list = []

    def entry_hall(self, rows, cols, hall_no):
        self._hall_list.append(Hall(rows, cols, hall_no))


class Hall:
    def __init__(self, rows, cols, hall_no):
        self._rows = rows
        self._cols = cols
        self._hall_no = hall_no
        self._seats = {}
        self._show_list = []

    def entry_show(self, id, movie_name, time):
        self._show_list.append((id, movie_name, time))
        self._seats[id] = [['F' for _ in range(self._cols)] for _ in range(self._rows)]

    def book_seats(self, id, seats_to_book):
        if id not in self._seats:
            raise ValueError("Invalid show ID")

        for row, col in seats_to_book:
            if row < 0 or row >= self._rows or col < 0 or col >= self._cols:
                raise ValueError("Invalid seat")
            if self._seats[id][row][col] == 'B':
                raise ValueError("Seat already booked")
            self._seats[id][row][col] = 'B'

    def view_show_list(self):
        for show in self._show_list:
            print(f"ID: {show[0]}, Movie: {show[1]}, Time: {show[2]}")

    def view_available_seats(self, id):
        if id not in self._seats:
            raise ValueError("Invalid show ID")

        print(f"Available seats for show ID {id}:")
        for row in range(self._rows):
            for col in range(self._cols):
                if self._seats[id][row][col] == 'F':
                    print(f"Row {row+1}, Col {col+1}")

# Replica System (Counter's View)
cinema = Star_Cinema()
cinema.entry_hall(10, 10, 1)

# Add shows
cinema._hall_list[0].entry_show(1, "Movie A", "10:00 AM")
cinema._hall_list[0].entry_show(2, "Movie B", "2:00 PM")

# View all shows
cinema._hall_list[0].view_show_list()

# View available seats for a show
cinema._hall_list[0].view_available_seats(1)

# Book seats
cinema._hall_list[0].book_seats(1, [(0, 0), (1, 1)])