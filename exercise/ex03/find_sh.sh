find . -name "*.sh" | sed 's/.*\///' | rev | cut -c4- | rev
