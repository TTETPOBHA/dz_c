//Ñîçäàåì êëàññ óçëà äåðåâà
	class TreeElement
	{
	private:
		int data;
		TreeElement* left;	//ëåâûé ïîòîìîê
		TreeElement* right;	//ïðàâûé ïîòîìîê
		TreeElement* back;	//ðîäèòåëü
	public:
		//Êîíñòðóêòîð èíèöèàëèçàöèè êîðíÿ äåðåâà
		TreeElement() :data(0), left(nullptr),right(nullptr), back(nullptr) {}

		//Êîíñòðóêòîð èíèöèàëèçàöèè óçëà äåðåâà
		TreeElement(int d, TreeElement* l, TreeElement* r, TreeElement* b) :data(d), left(l), right(r), back(b) {}

		//Êîíñòðóêòîð êîïèðîâàíèÿ
		TreeElement(TreeElement& t) :data(t.getData()),left(t.getLeft()), right(t.getRight()), back(t.getBack()) {}

		//ôóíêöèÿ çàíåñåíèÿ èíôîðìàöèîííîãî ïîëÿ óçëà
		void setData(int d) {
			data = d;
		}

		//ôóíêöèÿ, âîçâðàùàþùàÿ èíôîðìàöèîííîå ïîëå óçëà
		int getData() {
			return data;
		}

		//ôóíêöèÿ çàíåñåíèÿ ëåâîãî ïîòîìêà óçëà
		void setLeft(TreeElement* l) {
			left = l;
		}

		//ôóíêöèÿ, âîçâðàùàþùàÿ ëåâîãî ïîòîìêà óçëà
		TreeElement* getLeft() {
			return left;
		}

		//ôóíêöèÿ çàíåñåíèÿ ïðàâîãî ïîòîìêà óçëà
		void setRight(TreeElement* r) {
			right = r;
		}

		//ôóíêöèÿ, âîçâðàùàþùàÿ ïðàâîãî ïîòîìêà óçëà
		TreeElement* getRight() {
			return right;
		}

		//ôóíêöèÿ çàíåñåíèÿ ðîäèòåëÿ óçëà
		void setBack(TreeElement* b) {
			back = b;
		}

		//ôóíêöèÿ, âîçâðàùàþùàÿ ðîäèòåëÿ óçëà
		TreeElement* getBack() {
			return back;
		}

	};

	//Ñîçäàåì êëàññ áèíàðíîå äåðåâî ïîèñêà
	class BinaryTree
	{
		TreeElement* root;		//êîðåíü äåðåâà
		TreeElement* findElement(int n);	//ïîèñê óçëà ïî èíôîðìàöèîííîìó ïîëþ
		TreeElement* recursiveFindElement(int n);	//ïîèñê óçëà ïî èíôîðìàöèîííîìó ïîëþ ÷åðåç ðåêóðñèþ
		TreeElement* recursiveFindElement(TreeElement* r, int n);
		void recursiveRemove(int n, TreeElement* r);
	public:
		//Êîíñòðóêòîð èíèöèàëèçàöèè êîðíÿ äåðåâà
		BinaryTree() :root(nullptr) {};

		//Êîíñòðóêòîð èíèöèàëèçàöèè óçëà äåðåâà
		BinaryTree(TreeElement* r) :root(r) {};

		//ôóíêöèÿ äîáàâëåíèÿ óçëà
		void add(int current_n, int new_n);

		//ôóíêöèÿ óäàëåíèÿ óçëà
		void remove(int n);

};
