import sys


if __name__ == "__main__":
    print("=== Inventory System Analysis ===")
    inventory = {}
    for arg in sys.argv[1:]:
        if ":" not in arg:
            print(f"Error - invalid parameter '{arg}'")
            continue
        parts = arg.split(":")
        if len(parts) != 2:
            print(f"Error - invalid parameter '{arg}'")
            continue
        item, qty_str = parts[0], parts[1]
        if item in inventory:
            print(f"Redundant item '{item}' - discarding")
            continue
        try:
            quantity = int(qty_str)
            inventory[item] = quantity
        except ValueError as e:
            print(f"Quantity error for '{item}': {e}")
    print(f"Got inventory: {inventory}")
    items_list = list(inventory.keys())
    print(f"Item list: {items_list}")
    total_qty = sum(inventory.values())
    print(f"Total quantity of the {len(items_list)} items: {total_qty}")
    if total_qty > 0:
        for item, qty in inventory.items():
            pct = round((qty / total_qty) * 100, 1)
            print(f"Item {item} represents {pct}%")
    if inventory:
        most_item = items_list[0]
        least_item = items_list[0]
        for item, qty in inventory.items():
            if qty > inventory[most_item]:
                most_item = item
            if qty < inventory[least_item]:
                least_item = item
        print(
            f"Item most abundant: {most_item} "
            f"with quantity {inventory[most_item]}"
        )
        print(
            f"Item least abundant: {least_item} "
            f"with quantity {inventory[least_item]}"
        )
    inventory.update({"magic_item": 1})
    print(f"Updated inventory: {inventory}")
