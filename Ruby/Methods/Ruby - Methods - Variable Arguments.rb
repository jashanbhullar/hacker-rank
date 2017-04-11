#
#  Contributer : github.com/hell-sing
#  Email : abhishek_verma@hotmail.com
#
# Your code here
def full_name(*name)
    name.reduce {|n, a| n+" "+a}
end
