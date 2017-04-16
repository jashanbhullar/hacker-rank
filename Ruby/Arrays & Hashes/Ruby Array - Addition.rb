#
#  Contributer : github.com/hell-sing
#  Email : abhishek_verma@hotmail.com
#
def end_arr_add(arr, element)
    # Add `element` to the end of the Array variable `arr` and return `arr`
    arr.push(element)
end

def begin_arr_add(arr, element)
    # Add `element` to the beginning of the Array variable `arr` and return `arr`
    arr.unshift(element)
end

def index_arr_add(arr, index, element)
    # Add `element` at position `index` to the Array variable `arr` and return `arr`
    arr.insert(index,element)
end

def index_arr_multiple_add(arr, index)
    # add any two elements to the arr at the indexins
    arr.insert(index,12,13)

end
