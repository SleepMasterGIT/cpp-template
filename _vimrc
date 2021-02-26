set nocompatible  "be iMproved, required
set exrc 
set termguicolors
set encoding=UTF-8 
set rtp+=$HOME/.vim/bundle/Vundle.vim 
call vundle#begin('$HOME/.vim/bundle/')
" ========All the plugins goes here===========
Plugin 'VundleVim/Vundle.vim'
Plugin 'vim-scripts/L9'
Plugin 'tpope/vim-fugitive'
Plugin 'bluz71/vim-nightfly-guicolors'
Plugin 'itchyny/lightline.vim'
Plugin 'rstacruz/sparkup', {'rtp':'vim'}
" ========Plugins Ends here============
call vundle#end()

:autocmd BufNewFile *.cpp 0r $HOME/.vim/templates/template.cpp
:autocmd BufNewFile *.cpp norm G15k$
:autocmd filetype cpp nnoremap <F5> :w <bar> !g++ -ulimit -Wall -Wno-unused-result -std=c++14   -O2   % -o %:r && %:r <CR>

let g:lightline = { 'colorscheme': 'nightfly' }
set noshowmode

if $TERM == "xterm-256color"
  set t_Co=256
endif

set t_ut=""

inoremap <C-BS> <C-W>


autocmd GUIEnter * set vb t_vb= " for your GUI
autocmd VimEnter * set vb t_vb=
set novisualbell
set vb
set t_vb=

au GUIEnter * simalt ~x
set fillchars+=vert:\|
syntax on
set background=dark
set ruler
set relativenumber 
set hidden
set number
set laststatus=2
set smartindent
set st=4 sw=4 et
set shiftwidth=4
set backspace=indent,eol,start
set tabstop=4
let g:vim_json_syntax_conceal = 0
set laststatus=2
set autoread
:set guioptions-=m 
:set guioptions-=T 
:set guioptions-=r
:set guioptions-=L 
" :set lines=999 columns=999

" Vim with all enhancements
source $VIMRUNTIME/vimrc_example.vim

" Remap a few keys for Windows behavior
source $VIMRUNTIME/mswin.vim

" Use the internal diff if available.
" Otherwise use the special 'diffexpr' for Windows.
if &diffopt !~# 'internal'
  set diffexpr=MyDiff()
endif
function MyDiff()
  let opt = '-a --binary '
  if &diffopt =~ 'icase' | let opt = opt . '-i ' | endif
  if &diffopt =~ 'iwhite' | let opt = opt . '-b ' | endif
  let arg1 = v:fname_in
  if arg1 =~ ' ' | let arg1 = '"' . arg1 . '"' | endif
  let arg1 = substitute(arg1, '!', '\!', 'g')
  let arg2 = v:fname_new
  if arg2 =~ ' ' | let arg2 = '"' . arg2 . '"' | endif
  let arg2 = substitute(arg2, '!', '\!', 'g')
  let arg3 = v:fname_out
  if arg3 =~ ' ' | let arg3 = '"' . arg3 . '"' | endif
  let arg3 = substitute(arg3, '!', '\!', 'g')
  if $VIMRUNTIME =~ ' '
    if &sh =~ '\<cmd'
      if empty(&shellxquote)
        let l:shxq_sav = ''
        set shellxquote&
      endif
      let cmd = '"' . $VIMRUNTIME . '\diff"'
    else
      let cmd = substitute($VIMRUNTIME, ' ', '" ', '') . '\diff"'
    endif
  else
    let cmd = $VIMRUNTIME . '\diff'
  endif
  let cmd = substitute(cmd, '!', '\!', 'g')
  silent execute '!' . cmd . ' ' . opt . arg1 . ' ' . arg2 . ' > ' . arg3
  if exists('l:shxq_sav')
    let &shellxquote=l:shxq_sav
  endif
endfunction

set mouse=a

colorscheme nightfly
norm G15k$
