# Function to add a movie to the inventory (pass by value)
def add_movie_by_value(movie):
    movie = movie + " (Added by Value)"

# Function to rent a movie from the inventory (pass by result)
def rent_movie_by_result(inventory):
    inventory.pop()
    return inventory

# Function to update the movie rating in the inventory (pass by reference)
def update_movie_rating_by_reference(movie):
    movie["rating"] = "Updated Rating"

# Function to display the movie information from the inventory (pass by name)
def display_movie_by_name(movie_name, inventory):
    if movie_name in inventory:
        print(f"Movie Name: {movie_name}")
        print(f"Rating: {inventory[movie_name]['rating']}")
    else:
        print("Movie not found in the inventory")

# Main program
inventory = {
    "Movie A": {"rating": "Rating A"},
    "Movie B": {"rating": "Rating B"},
    "Movie C": {"rating": "Rating C"}
}

# Pass by value example
movie_name = "Movie X"
add_movie_by_value(movie_name)
print(f"After adding movie by value: {movie_name}")

# Pass by result example
rented_inventory = rent_movie_by_result(list(inventory.keys()))
print(f"After renting movie by result: {rented_inventory}")

# Pass by reference example
movie = inventory["Movie A"]
update_movie_rating_by_reference(movie)
print(f"After updating movie rating by reference: {inventory}")

# Pass by name example
display_movie_by_name("Movie B", inventory)
display_movie_by_name("Movie D", inventory)
