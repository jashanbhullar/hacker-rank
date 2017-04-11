#
#  Contributer : github.com/hell-sing
#  Email : abhishek_verma@hotmail.com
#
def sum_terms(n)
  # your code here
    (1..n).inject(0) {|sum, i| sum + (i*i + 1) }
end
