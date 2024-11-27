class Product:
    def __init__(self, name, price, quantity):
        self.name = name
        self.price = price
        self.quantity = quantity

    def __str__(self):
        return f"{self.name} - ${self.price} (Quantity: {self.quantity})"


class Shop:
    def __init__(self):
        self.products = []

    def add_product(self, product):
        # Check if the product already exists
        for p in self.products:
            if p.name == product.name:
                p.quantity += product.quantity
                print(f"Updated {product.name} stock to {p.quantity}.")
                return
        # Add new product if not already in shop
        self.products.append(product)
        print(f"Added {product.name} to the shop.")

    def buy_product(self, product_name, quantity):
        for product in self.products:
            if product.name == product_name:
                if product.quantity >= quantity:
                    product.quantity -= quantity
                    print(f"Successfully bought {quantity} {product_name}(s). 🎉")
                    return
                else:
                    print(f"Insufficient stock for {product_name}. Only {product.quantity} available.")
                    return
        print(f"{product_name} is not available in the shop.")

    def list_products(self):
        if not self.products:
            print("The shop has no products.")
        else:
            print("Available products:")
            for product in self.products:
                print(product)


# Example Usage
if __name__ == "__main__":
    shop = Shop()

    # Add products to the shop
    shop.add_product(Product("Apple", 1.5, 10))
    shop.add_product(Product("Banana", 0.5, 20))
    shop.add_product(Product("Apple", 1.5, 5))  # Updating stock for Apple

    # List products
    shop.list_products()

    # Buy a product
    shop.buy_product("Apple", 3)
    shop.buy_product("Banana", 25)
    shop.buy_product("Grapes", 5)

    # List products after buying
    shop.list_products()
