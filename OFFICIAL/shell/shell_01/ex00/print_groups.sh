#!/bin/sh


# Verifica se a variável FT_USER está definida
if [ -z "$FT_USER" ]; then
    echo "Erro: Variável FT_USER não definida."
    exit 1
fi

# Verifica se o usuário existe
if ! id "$FT_USER" &>/dev/null; then
    echo "Erro: O usuário '$FT_USER' não existe."
    exit 1
fi

# Lista os grupos do usuário, substituindo espaços por vírgulas e removendo quebras de linha
groups  | tr -s ' ' ',' | tr -d '\n'
groups "$FT_USER" | tr -s ' ' ',' | td -d '\n'
