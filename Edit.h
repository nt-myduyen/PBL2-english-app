#ifndef EDIT_H
#define EDIT_H

#include "Base.h"
#include "View.h"
#include "Form.h"

class Edit: public Base {
	private:
		Form form;
		ViewDictionary view;
		WordEng oldWord, newWord;
		
		Texture bulletin_board_image;
		RectangleShape buttonAdd, bulletin_board_rectangle, blurred_background, confirmDeleteWord, confirmNotDeleteWord;
		Text textAdd, notification, oldWordText[3], newWordText[3], confirmDeleteWordText, yes, no;
		Sprite spriteImageNewWord, spriteImageOldWord, spriteSpeakOldWord, spriteSpeakNewWord;
		
		bool isDeleteWord = false;
		bool isAddWord = false;
		bool isView = true;
		int checkForm;
		bool isNotification = false;

	public:
		Edit();
		~Edit();
		void loadResource();
		void setFormAdd(HashTable &table);
		void setFormEdit(HashTable &table);
		int handle(RenderWindow &window) {}
		int handle(RenderWindow &window, int keypressed, bool isKeyPressed, HashTable &table);
		void draw(RenderWindow &window);
};
#endif
