! subtract.f90
function subtract(a, b) bind(C, name="subtract")
    use, intrinsic :: iso_c_binding
    implicit none
    integer(c_int), value :: a, b
    integer(c_int) :: subtract
    subtract = a - b
end function subtract