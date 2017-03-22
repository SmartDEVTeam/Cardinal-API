#include "CardinalItem.h"

CardinalItem::CardinalItem(short id, std::string name, std::string icon, int iconData, unsigned char maxStackSize, bool stackedByData, bool handEquipped) : Item(name, id - 256)
{
	Item::mItems[id] = this;
	
	setIcon(icon, iconData);
	setMaxStackSize(maxStackSize);
	setStackedByData(stackedByData);
	if(handEquipped)
		setHandEquipped();
	else
		return;
}
