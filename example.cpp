#include "lm/model.hh"
#include <iostream>
#include <string>
int main() {
	using namespace std;

	lm::ngram::Model model("file.binary");
	lm::ngram::State state(model.BeginSentenceState()), out_state;
	const lm::ngram::Vocabulary &vocab = model.GetVocabulary();
	
	string word;
	while (cin >> word) {
	  cout << model.Score(state, vocab.Index(word), out_state) << '\n';
	  state = out_state;
	}
}
