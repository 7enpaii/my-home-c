#git status --ignored -s | grep '!! ' | cut -c4- | grep -o '[^/]*$'
#git ls-files --others --ignored --exclude-stand
find . -exec git check-ignore {} + | xargs -I{} basename {}

