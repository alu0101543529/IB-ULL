" Fichero .vimrc de mi usuario
" Los comentarios en este fichero se ponen con comillas dobles

" Esta opción debe estar la primera porque cambia otras opciones
" nocompatible permite funciones que VI no soporta
set nocompatible

set number

" Muestra la posición del cursor en todo momento
set ruler

" Muestra los tabs existente con 2 espacios
set autoindent
set shiftwidth=2 
set tabstop=2

" shiftwidth (el número de espacios a usar cuando se indenta)
set sw=2

set tw=80

syntax on

" Volver a la última posición al abrir un fichero
" https://stackoverflow.com/questions/7894330/preserve-last-editing-position-in-vim
autocmd BufReadPost *
     \ if line("'\"") > 0 && line("'\"") <= line("$") |
     \   exe "normal! g`\"" |
     \ endif
