function! Add42Header()
    " Get the current file name
    let filename = expand('%:t')

    " Get the current user
    let username = "anbaltaz"

    " Get the current date and time
    let current_time = strftime("%Y/%m/%d %H:%M:%S")

    " Set email
    let email = "anbaltaz@student.42porto.com"

    " Define the header content
    let header = [
        \ "/* ************************************************************************** */",
        \ "/*                                                                            */",
        \ "/*                                                        :::      ::::::::   */",
        \ "/*   " . printf("%-46s", filename) . "     :+:      :+:    :+:   */",
        \ "/*                                                    +:+ +:+         +:+     */",
        \ "/*   By: " . printf("%-35s", username . " <" . email . ">") . "        +#+  +:+       +#+        */",
        \ "/*                                                +#+#+#+#+#+   +#+           */",
        \ "/*   Created: " . current_time . " by " . printf("%-15s", username) . "   #+#    #+#             */",
        \ "/*   Updated: " . current_time . " by " . printf("%-15s", username) . "  ###   ########.fr       */",
        \ "/*                                                                            */",
        \ "/*   Purpose:                                                            **** */",
        \ "/*                                                                            */",
        \ "/*   Usage:                                                              **** */",
        \ "/* ************************************************************************** */"
        \ ]

    " Move to the top of the file
    call setpos('.', [0, 1, 1, 0])

    " Insert the header
    call append(0, header)

    " Move the cursor to the line below the header
    call setpos('.', [0, len(header) + 1, 1, 0])
endfunction

" Add the command for easy usage
command! Add42Header call Add42Header()

" Automatically add 42 header for new C files
autocmd BufNewFile *.c call Add42Header()

"maping ctrl + c "
nnoremap <C-h> :call Add42Header()<CR>
