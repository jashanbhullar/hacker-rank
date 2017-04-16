#
#  Contributer : github.com/hell-sing
#  Email : abhishek_verma@hotmail.com
#
def group_by_marks(marks, pass_marks)
  marks.group_by { |key, value| value > pass_marks ? "Passed" : "Failed"}
end
