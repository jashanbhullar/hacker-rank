#
#  Contributer : github.com/hell-sing
#  Email : abhishek_verma@hotmail.com
#
def skip_animals(animals, skip)
    arr = []
    animals.each_with_index { |animal, index| arr << "#{index}:#{animal}" if index >= skip}
    arr
end
