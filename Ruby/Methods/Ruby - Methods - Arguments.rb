#
#  Contributer : github.com/hell-sing
#  Email : abhishek_verma@hotmail.com
#
# Your code here
def take(arr, slice_length=1)
    len = arr.length
    return [] if slice_length >= len
    arr[-(len - slice_length)..-1]
end
