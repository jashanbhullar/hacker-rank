#
#  Contributer : github.com/hell-sing
#  Email : abhishek_verma@hotmail.com
#
def factorial
    yield
end

n = gets.to_i
factorial do
    puts (1..n).inject(:*)
end
