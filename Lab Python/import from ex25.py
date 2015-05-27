import ex25
sentence = "All good things come to those who wait."
print sentence
print "1"
words = ex25.break_words(sentence)
print words 
print "2"
sorted_words = ex25.sort_words(words)
print "3"
print sorted_words
print "4"
ex25.print_first_word(words)
print "5"
ex25.print_last_word(words)
print "6"
print words
print "7"
ex25.print_first_word(sorted_words)
print "8"
ex25.print_last_word(sorted_words)
print "9"
print sorted_words
print "10"
sorted_words = ex25.sort_sentence(sentence)
print "11"
print sorted_words
print "12"
ex25.print_first_and_last(sentence)
print "13"
ex25.print_first_and_last_sorted(sentence)
