import re

def fun(s):
    # return True if s is a valid email, else return False
    username = re.compile("[A-Za-z0-9-_]+$")
    website = re.compile("[a-zA-Z0-9]+$")
    extension = re.compile("[a-zA-Z]{1,3}$")
    pieces = s.split('@')
    if (len(pieces) != 2 or username.match(pieces[0]) == None) :
        return False
    web = pieces[1].split('.')
    if (len(web) != 2 or website.match(web[0]) == None) :
        return False
    if (extension.match(web[1]) == None) :
        return False
    return True


def filter_mail(emails):
    return filter(fun, emails)

if __name__ == '__main__':
    n = int(raw_input())
    emails = []
    for _ in range(n):
        emails.append(raw_input())

    filtered_emails = filter_mail(emails)
    filtered_emails.sort()
    print filtered_emails
