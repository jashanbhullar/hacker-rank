#
#  Contributer : github.com/hell-sing
#  Email : abhishek_verma@hotmail.com
#
# Enter your code here.
def transcode(string)
    string.encode("iso-8859-1").force_encoding("utf-8")
end
